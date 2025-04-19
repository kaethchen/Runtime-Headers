@class NSString, NSURL;

@interface MLModelCollectionEntry : NSObject

@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSURL *modelURL;

+ (id)entryWithModelIdentifier:(id)a0 modelURL:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithModelIdentifier:(id)a0 modelUrl:(id)a1;
- (BOOL)isEqualToModelCollectionEntry:(id)a0;

@end
