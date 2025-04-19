@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKDocumentNavigator : OKDocumentCanvas {
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
}

@property (copy, nonatomic) NSString *className;
@property (readonly, copy, nonatomic) NSMutableArray *pagesNames;

+ (id)navigatorWithName:(id)a0 className:(id)a1 pagesNames:(id)a2 settings:(id)a3 userData:(id)a4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)dictionary;
- (id)pages;
- (id)canvasWithName:(id)a0;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)a0 andName:(id)a1 forDocument:(id)a2 andParent:(id)a3;
- (id)pageWithName:(id)a0;
- (id)parentPage;

@end
