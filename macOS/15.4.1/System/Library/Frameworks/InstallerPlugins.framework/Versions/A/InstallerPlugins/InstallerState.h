@class NSDictionary, NSString, NSArray;

@interface InstallerState : NSObject {
    struct InstallerState_Private { id x0; id x1; } *_private;
}

@property NSDictionary *stateDictionary;
@property (readonly) BOOL licenseAgreed;
@property (readonly) NSString *licenseAgreedLanguage;
@property (readonly) NSString *targetVolumePath;
@property (readonly) NSString *targetPath;
@property (readonly) NSArray *choiceDictionaries;
@property (readonly) BOOL installStarted;
@property (readonly) BOOL installSucceeded;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)choiceDictionaryForIdentifier:(id)a0;
- (void)removeChoiceDictionaries;
- (void)setChoiceDictionary:(id)a0;

@end
