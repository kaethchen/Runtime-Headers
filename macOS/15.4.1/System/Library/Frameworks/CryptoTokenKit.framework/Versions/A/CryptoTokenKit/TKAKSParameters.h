@class NSData;

@interface TKAKSParameters : NSObject {
    struct aks_params_s { } *_params;
    NSData *_encoded;
}

@property (readonly, copy) NSData *data;
@property (readonly) const void *bytes;
@property (readonly) unsigned long long length;

+ (void)_dumpPlist:(id)a0 into:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setData:(id)a0 forKey:(unsigned int)a1;
- (void)setNumber:(long long)a0 forKey:(unsigned int)a1;
- (id)initWithParameters:(id)a0;

@end
