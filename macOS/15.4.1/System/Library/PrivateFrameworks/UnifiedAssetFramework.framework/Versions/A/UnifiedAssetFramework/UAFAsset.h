@class NSString, NSURL, NSDictionary;

@interface UAFAsset : NSObject {
    unsigned long long _hash;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSURL *location;
@property (readonly, copy) NSDictionary *metadata;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 location:(id)a1 metadata:(id)a2;
- (unsigned long long)_generateHash;
- (BOOL)isPresentOnDevice;
- (id)propertiesAsDictionary:(BOOL)a0;

@end
