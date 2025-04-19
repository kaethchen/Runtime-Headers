@class NSString, NSURL, AssignComponentInfo, IntermediateComponentInfo, NSMutableDictionary, QFilterImageInfo, RenderingIntentInfo, NSMutableArray, DefaultComponentInfo, TargetComponentInfo, QFilterPDFX3Info, NSArray;

@interface QFilterInfo : NSObject

@property id filter;
@property struct QuartzFilterOptions { } *options;
@property struct QuartzFilterOptionsInfo { struct QuartzFilterProfileSet *x0; struct QuartzFilterProfileSet *x1; struct QuartzFilterProfileSet *x2; struct QuartzFilterProfileSet *x3; struct QuartzFilterProfileSet *x4; struct QuartzFilterProfileSet *x5; struct QuartzFilterProfileSet *x6; struct QuartzFilterProfileSet *x7; struct QuartzFilterProfileSet *x8; unsigned int[4][5] *x9; unsigned int[4][5] *x10; unsigned int[4][5] *x11; int[7][4][5] *x12; struct QuartzFilterImageInfo *x13; void *x14; struct QuartzFilterImageInfo *x15; void *x16; struct QuartzFilterHalftoneInfo *x17; struct QuartzFilterShadingInfo *x18; struct QuartzFilterPDFX3Info *x19; void *x20; struct QuartzFilterPDFSpecialInfo *x21; } *optionsInfo;
@property (retain) NSURL *url;
@property (copy) NSString *comments;
@property (retain) NSMutableDictionary *domains;
@property (getter=isReadOnly) BOOL readOnly;
@property (retain) NSMutableArray *usedObjectTypes;
@property (readonly, retain) AssignComponentInfo *assignInfo;
@property (readonly, retain) DefaultComponentInfo *defaultInfo;
@property (readonly, retain) IntermediateComponentInfo *intermInfo;
@property (readonly, retain) TargetComponentInfo *targetInfo;
@property (readonly, retain) RenderingIntentInfo *intentInfo;
@property (readonly, retain, nonatomic) QFilterImageInfo *imageInfo;
@property (readonly, retain, nonatomic) QFilterImageInfo *monoImageInfo;
@property (readonly, retain, nonatomic) QFilterPDFX3Info *pdfx3Info;
@property (retain) NSArray *dPDFXNames;

- (void)dealloc;
- (id)init;
- (struct QuartzFilterHalftoneInfo { int x0; unsigned int x1; unsigned int x2; } *)halftoneInfo;
- (struct QuartzFilterShadingInfo { unsigned int x0; unsigned int x1; unsigned char x2; } *)shadingInfo;
- (struct QuartzFilterPDFSpecialInfo { BOOL x0; } *)specialInfo;

@end
