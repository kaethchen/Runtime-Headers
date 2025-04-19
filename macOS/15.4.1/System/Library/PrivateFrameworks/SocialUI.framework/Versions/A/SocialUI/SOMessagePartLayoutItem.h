@class IMTranscriptChatItem, NSString, IMTranscriptBubbleSizeCache, SOMessagePartCollectionViewItem;
@protocol SOMessagePartLayoutItemDelegate;

@interface SOMessagePartLayoutItem : NSObject <IMChatTranscriptDrawable> {
    SOMessagePartCollectionViewItem *_referenceViewController;
    IMTranscriptBubbleSizeCache *_bubbleSizeCache;
}

@property (class, readonly, nonatomic) Class viewClass;
@property (class, readonly, copy, nonatomic) NSString *itemTypeIdentifier;

@property (weak, nonatomic) id<SOMessagePartLayoutItemDelegate> delegate;
@property (retain, nonatomic) IMTranscriptChatItem *chatTranscriptItem;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) long long layoutClassification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeConstrainedToWidth:(double)a0;
- (long long)verticalSpaceToPrecedingItemOfClassification:(long long)a0;

@end
