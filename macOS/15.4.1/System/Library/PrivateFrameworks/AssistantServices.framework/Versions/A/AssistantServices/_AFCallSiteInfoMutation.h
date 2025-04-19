@class NSString, AFCallSiteInfo;

@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating> {
    AFCallSiteInfo *_base;
    NSString *_imagePath;
    NSString *_symbolName;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasImagePath : 1; unsigned char hasSymbolName : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)setSymbolName:(id)a0;
- (void)setImagePath:(id)a0;
- (id)getImagePath;
- (id)getSymbolName;
- (id)initWithBase:(id)a0;

@end
