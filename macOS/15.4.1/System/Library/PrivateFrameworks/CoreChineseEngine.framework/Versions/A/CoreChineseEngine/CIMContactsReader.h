@class CNContactStore, NSString, NSOperationQueue, NSMutableArray;

@interface CIMContactsReader : NSObject {
    NSOperationQueue *_contactsNameQueue;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (copy, nonatomic) NSString *inputMode;
@property (retain, nonatomic) NSMutableArray *cachedEntries;
@property (readonly, retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)sharedContactsReader;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)contactsChanged;
- (void)contactsNamePhoneticPairsFromInputMode:(id)a0 completionHandler:(id /* block */)a1;
- (id)contactsNameWubiCodePairsWithMecabraEnvironment:(id)a0;
- (id)convertPinyinPhoneticToInputString:(id)a0;
- (id)transliterate:(id)a0 inputMode:(id)a1;

@end
