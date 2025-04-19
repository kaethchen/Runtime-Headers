@class NSString, NSMutableDictionary;

@interface OKDocumentCouchStep : OKDocumentCanvas {
    NSMutableDictionary *_internalSettings;
}

@property (readonly, copy, nonatomic) NSString *anchorPage;
@property (readonly, copy, nonatomic) NSString *script;
@property (readonly, nonatomic) double duration;

+ (id)couchStepWithAnchorPageName:(id)a0 script:(id)a1 duration:(double)a2 settings:(id)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)dictionary;
- (id)nextStep;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)a0 forDocument:(id)a1 andCouch:(id)a2;
- (id)parentCouch;

@end
