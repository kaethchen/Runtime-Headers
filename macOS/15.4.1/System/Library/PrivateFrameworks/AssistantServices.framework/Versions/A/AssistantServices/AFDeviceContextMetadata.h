@class AFDeviceContextHistoryConfiguration, NSString, NSArray, NSMutableDictionary, NSDate;

@interface AFDeviceContextMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_backingStore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDate *deliveryDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *redactedKeyPaths;
@property (readonly, nonatomic) AFDeviceContextHistoryConfiguration *historyConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)backingStore;
- (id)initWithBackingStore:(id)a0;
- (id)initWithType:(id)a0 deliveryDate:(id)a1 expirationDate:(id)a2 redactedKeyPaths:(id)a3 historyConfiguration:(id)a4;
- (BOOL)isExpiredByDate:(id)a0;

@end
