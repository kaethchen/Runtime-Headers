@interface ICAudioRecordingViewController : NSObject

+ (BOOL)presentedViewControllerIsAudio:(id)a0;
+ (id)audioAttachmentInsideViewController:(id)a0;
+ (void)containerViewDidResize:(id)a0;
+ (id)getHostingViewForAttachmentModel:(id)a0 delegate:(id)a1;

- (id)init;

@end
