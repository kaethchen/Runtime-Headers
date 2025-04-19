@class NSSet, NSArray;

@interface IFResourceNames : NSObject

@property (readonly, copy) NSSet *rootNames;
@property (readonly, copy) NSArray *variants;

- (void).cxx_destruct;
- (id)extrapolateFullNamesForIOS;
- (id)extrapolateFullNamesForMacOS;
- (id)initWithRootNames:(id)a0;
- (id)initWithRootNames:(id)a0 variants:(id)a1;

@end
