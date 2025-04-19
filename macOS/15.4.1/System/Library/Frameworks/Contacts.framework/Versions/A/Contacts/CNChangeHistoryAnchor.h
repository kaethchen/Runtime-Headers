@class NSData, NSPersistentHistoryToken;

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSPersistentHistoryToken *token;
@property (readonly, nonatomic) NSData *historyToken;
@property (readonly, nonatomic) long long sequenceNumber;

+ (id)limitedAccessHistoryAnchor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersistentHistoryToken:(id)a0;
- (id)initWithHistoryToken:(id)a0 error:(id *)a1;

@end
