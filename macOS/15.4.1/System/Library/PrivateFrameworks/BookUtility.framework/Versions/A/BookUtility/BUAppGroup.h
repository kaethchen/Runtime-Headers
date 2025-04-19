@class NSString, NSURL, NSUserDefaults;

@interface BUAppGroup : NSObject {
    NSString *_identifier;
    NSURL *_containerURL;
    NSUserDefaults *_userDefaults;
}

@property (class, readonly, nonatomic) BUAppGroup *books;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (BOOL)isUnitTesting;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
