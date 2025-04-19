@class NSString;

@interface SEService.SEState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ seType;
    void /* unknown type, empty encoding */ freeMemory;
    void /* unknown type, empty encoding */ infoDictionary;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
