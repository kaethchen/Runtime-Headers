@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKDocumentPage : OKDocumentCanvas {
    NSString *_templateName;
    NSString *_internalNavigatorName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalWidgets;
}

@property (copy, nonatomic) NSString *navigatorName;
@property (readonly, copy, nonatomic) NSMutableArray *widgets;

+ (id)pageWithName:(id)a0 templateName:(id)a1 navigatorName:(id)a2 settings:(id)a3 properties:(id)a4 userData:(id)a5 widgets:(id)a6;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)dictionary;
- (id)navigator;
- (id)canvasWithName:(id)a0;
- (id)parentNavigator;
- (void)resolveIfNeeded;
- (id)widgetWithName:(id)a0;
- (id)initWithDictionary:(id)a0 andName:(id)a1 forDocument:(id)a2 andParent:(id)a3;
- (id)pageTemplate;

@end
