@class NSString, NSDictionary, NSDate;

@interface CKHistoricEvent : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _firstSeen;
    void /* unknown type, empty encoding */ _lastSeen;
    void /* unknown type, empty encoding */ _frequency;
    void /* unknown type, empty encoding */ _lastDuration;
    void /* unknown type, empty encoding */ _totalDuration;
    void /* unknown type, empty encoding */ _metadata;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *firstSeen;
@property (nonatomic, readonly) NSDate *lastSeen;
@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) double lastDuration;
@property (nonatomic, readonly) double totalDuration;
@property (nonatomic, readonly) NSDictionary *metadata;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0;
- (id)initFrom:(id)a0 withIdentifier:(id)a1;

@end
