@class NSDictionary, NSData, NSString;

@interface UVPropertyList : NSObject <NSSecureCoding, BSXPCSecureCoding> {
    NSDictionary *_dictionary;
    NSData *_data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)_encodeWithAnyCoder:(id)a0;
- (id)_initWithAnyCoder:(id)a0;
- (void)encodeToXpcDictionary:(id)a0;
- (id)initWithXpcDictionary:(id)a0;

@end
