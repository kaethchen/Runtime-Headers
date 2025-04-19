@class ABAccount, NSArray, ABGroup, ABAddressBook;

@interface ABGroupImportFilesScope : NSObject

@property (readonly) ABAccount *account;
@property (readonly) ABAddressBook *addressBook;
@property (readonly) ABGroup *group;
@property (readonly) NSArray *filenames;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 group:(id)a2 filenames:(id)a3;
- (id)initWithFilenames:(id)a0;

@end
