@class NSString, NSMutableArray;

@interface ICTableAttachmentView : ICAttachmentView <ICTextPreviewProvider>

@property (retain, nonatomic) NSMutableArray *outsideViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
