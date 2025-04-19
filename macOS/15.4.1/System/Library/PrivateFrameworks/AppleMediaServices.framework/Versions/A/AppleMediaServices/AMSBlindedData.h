@class NSData, NSString;

@interface AMSBlindedData : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ blindedElement;
    void /* unknown type, empty encoding */ privateInput;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *blindedElement;
@property (nonatomic, readonly) NSData *privateInput;
@property (nonatomic, readonly) NSString *timestamp;
@property (nonatomic, readonly) NSString *blindedElementString;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlindedElement:(id)a0 privateInput:(id)a1 timestamp:(id)a2;

@end
