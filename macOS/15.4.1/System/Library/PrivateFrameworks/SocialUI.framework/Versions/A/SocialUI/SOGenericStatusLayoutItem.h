@class NSString, IMTranscriptBubbleSizeCache, SOGenericStatusItemCollectionViewItem, IMTranscriptChatItem;
@protocol SOGenericStatusLayoutItemDelegate;

@interface SOGenericStatusLayoutItem : NSObject <IMChatTranscriptDrawable> {
    SOGenericStatusItemCollectionViewItem *_referenceViewController;
    IMTranscriptBubbleSizeCache *_bubbleSizeCache;
}

@property (class, readonly, nonatomic) Class viewClass;
@property (class, readonly, copy, nonatomic) NSString *itemTypeIdentifier;

@property (weak, nonatomic) id<SOGenericStatusLayoutItemDelegate> delegate;
@property (readonly, nonatomic, getter=_textMargins) struct NSEdgeInsets { double top; double left; double bottom; double right; } textMargins;
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
