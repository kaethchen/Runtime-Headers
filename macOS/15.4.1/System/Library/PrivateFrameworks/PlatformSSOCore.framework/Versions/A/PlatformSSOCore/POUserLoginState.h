@class NSString, NSDate;

@interface POUserLoginState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDate *lastLogin;
@property (nonatomic) unsigned long long loginType;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) NSString *uniqueIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dataRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithUniqueIdentifier:(id)a0;
- (id)dataRepresentationForDisplay:(BOOL)a0;
- (id)dictionaryRepresentationForDisplay:(BOOL)a0;
- (void)setlastLogin:(id)a0;

@end
