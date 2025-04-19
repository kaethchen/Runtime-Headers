@class NSString;
@protocol UINSActivityItemsConfigurationReading;

@interface UINSSharingDelegateItemSource : NSObject <NSSharingServiceItemSource> {
    id<UINSActivityItemsConfigurationReading> _activityItemsConfiguration;
    long long _itemIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 itemForSharingServiceName:(id)a1;
- (id)sharingServicePicker:(id)a0 subjectForSharingServiceName:(id)a1;
- (id)sharingServicePicker:(id)a0 thumbnailImageForSharingServiceName:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)sharingServicePickerLinkMetadata:(id)a0;
- (id)sharingServicePickerPlaceholderItem:(id)a0;
- (id)initWithActivityItemsConfiguration:(id)a0 itemAtIndex:(long long)a1;

@end
