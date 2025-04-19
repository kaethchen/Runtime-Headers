@class NSOperation, NSString;
@protocol UINSActivityItemSource;

@interface UINSActivityItemSourceProxy : NSObject <NSSharingServiceItemSource> {
    NSOperation *_operation;
}

@property (readonly, nonatomic) id<UINSActivityItemSource> item;
@property (readonly, nonatomic) NSOperation *operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (id)sharingServicePicker:(id)a0 dataTypeIdentifierForSharingServiceName:(id)a1;
- (id)sharingServicePicker:(id)a0 itemForSharingServiceName:(id)a1;
- (id)sharingServicePicker:(id)a0 subjectForSharingServiceName:(id)a1;
- (id)sharingServicePicker:(id)a0 thumbnailImageForSharingServiceName:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)sharingServicePickerLinkMetadata:(id)a0;
- (id)sharingServicePickerPlaceholderItem:(id)a0;

@end
