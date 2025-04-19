@class MUIWebAttachmentController, NSArray, NSString, NSURL;

@interface MUISelectionAndClickInformation : NSObject <EFPubliclyDescribable>

@property (copy, nonatomic) NSArray *selectedAttachmentControllers;
@property (retain, nonatomic) MUIWebAttachmentController *clickedAttachmentController;
@property (readonly, copy, nonatomic) NSArray *selectedAndClickedAttachmentControllers;
@property (retain, nonatomic) NSURL *clickedLinkURL;
@property (retain, nonatomic) NSURL *clickedMediaURL;
@property (retain, nonatomic) NSURL *clickedImageURL;
@property (nonatomic) BOOL isTextInImage;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
