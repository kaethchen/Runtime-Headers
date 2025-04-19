@class NSArray, NSString;

@interface SSDisplayDetailsConcretePrimitives : NSObject <SSDisplayDetailsPrimitives>

@property (readonly, nonatomic) NSArray *screensDetails;
@property (copy, nonatomic) id /* block */ displayReconfiguredCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)getActivePresetIndex:(long long)a0;
- (long long)getDisplayPresetCount:(long long)a0;
- (id)getPresetID:(long long)a0 presetIndex:(long long)a1;

@end
