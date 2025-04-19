@class NSString;

@interface CloudBookmarksDeviceIdentifier : NSObject {
    NSString *_salt;
}

@property (readonly, copy, nonatomic) NSString *stringValue;

+ (void)_resetStoredSalt;
+ (id)_storedSaltCreatingIfNeeded;
+ (void)resetStandardIdentifier;
+ (id)standardIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (id)initWithSalt:(id)a0;

@end
