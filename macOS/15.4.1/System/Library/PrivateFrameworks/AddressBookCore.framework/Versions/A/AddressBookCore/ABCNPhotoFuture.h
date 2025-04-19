@class ABPerson, ABAddressBook;

@interface ABCNPhotoFuture : CNFuture {
    ABAddressBook *_addressBook;
    ABPerson *_person;
    long long _tag;
}

- (void)dealloc;
- (void)start;
- (void)didCancel;
- (id)initWithAddressBook:(id)a0 person:(id)a1;
- (id)photoForImageData:(id)a0;

@end
