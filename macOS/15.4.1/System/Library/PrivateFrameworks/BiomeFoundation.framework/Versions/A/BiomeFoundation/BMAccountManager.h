@class BMFileManager;

@interface BMAccountManager : NSObject {
    BMFileManager *_fileManager;
}

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)accounts;
- (id)_accountIdentifiers;
- (id)deviceIdentifiersForAccount:(id)a0;
- (id)initWithUseCase:(id)a0;

@end
