@class NSString, TUContinuityHandleAnonym, CNContact;

@interface TUContinuityFavorite : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) TUContinuityHandleAnonym *anonym;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContact:(id)a0 contactIdentifier:(id)a1 anonym:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4;

@end
