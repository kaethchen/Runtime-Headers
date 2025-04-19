@class NSString, NSUUID;

@interface SFShareSheetUserAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) NSString *actionString;
@property (readonly, copy, nonatomic) NSUUID *uuid;

+ (id)performActivityWithIdentifier:(id)a0;
+ (id)performPeopleSuggestionWithIdentifier:(id)a0;
+ (id)removePeopleSuggestionWithIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActionType:(long long)a0 uuid:(id)a1;

@end
