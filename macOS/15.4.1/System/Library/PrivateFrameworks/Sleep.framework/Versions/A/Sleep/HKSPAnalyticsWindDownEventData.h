@class NSString;

@interface HKSPAnalyticsWindDownEventData : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) BOOL wasUsed;
@property (readonly, nonatomic) BOOL wasCollected;
@property (readonly, copy, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)collectedEventDataCopy;
- (id)initWithWindDownAction:(unsigned long long)a0 wasUsed:(BOOL)a1 identifier:(id)a2;
- (id)initWithWindDownAction:(unsigned long long)a0 wasUsed:(BOOL)a1 identifier:(id)a2 wasCollected:(BOOL)a3;
- (BOOL)isEqualEventData:(id)a0;

@end
