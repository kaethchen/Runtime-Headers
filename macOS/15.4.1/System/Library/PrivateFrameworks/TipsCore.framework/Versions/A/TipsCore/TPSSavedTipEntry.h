@class NSString, NSDate;

@interface TPSSavedTipEntry : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ tipIdentifier;
    void /* unknown type, empty encoding */ savedDate;
    void /* unknown type, empty encoding */ lastUsedVersion;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *tipIdentifier;
@property (nonatomic, copy) NSDate *savedDate;
@property (nonatomic, copy) NSString *lastUsedVersion;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTipIdentifier:(id)a0 savedDate:(id)a1 lastUsedVersion:(id)a2;

@end
