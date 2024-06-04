void save_address_book(const AddressBook* address_book) {
    FILE* pf = fopen("data.txt", "w");
    if (pf == NULL) {
        perror("fopen");
        return;
    }

    for (int i = 0; i < address_book->count; i++) {
        const Contact* contact = &address_book->contacts[i];
        fprintf(pf, "%s,%s\n", contact->name, contact->phone);
    }

    fclose(pf);
}


void load_address_book(AddressBook* address_book) {
    address_book->count = 0;
    FILE* pf = fopen("address_book.txt", "r");
    if (pf == NULL) {
        perror("fopen");
        return;
    }

    Contact contact;
    while (fscanf(file, "%49[^,],%19s\n", contact.name, contact.phone) == 2) {
        if (address_book->count < MAX_CONTACTS) {
            address_book->contacts[address_book->count++] = contact;
        }
        else {
            break; 
        }
    }

    fclose(pf);
}
