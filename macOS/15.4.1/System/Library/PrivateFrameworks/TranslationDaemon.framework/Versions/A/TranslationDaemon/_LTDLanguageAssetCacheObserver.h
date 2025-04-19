@class NSUUID;

@interface _LTDLanguageAssetCacheObserver : NSObject

@property (readonly, nonatomic) NSUUID *observerId;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isIndeterminate;
@property (readonly, nonatomic) id /* block */ observations;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithID:(id)a0 type:(unsigned long long)a1 progress:(BOOL)a2 observations:(id /* block */)a3 completion:(id /* block */)a4;

@end
