@class NSString;

@interface GCControllerElementSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isCustomized) BOOL customized;
@property (readonly, nonatomic) NSString *mappingKey;
@property (copy, nonatomic) id /* block */ changedHandler;
@property (nonatomic) BOOL invertHorizontally;
@property (nonatomic) BOOL invertVertically;
@property (nonatomic) BOOL swapAxes;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)setDictionaryRepresentation:(id)a0;
- (void)setDefaultValues;
- (id)initWithElementKey:(id)a0;
- (void)setDictionaryRepresentation:(id)a0 fromCoder:(BOOL)a1;

@end
