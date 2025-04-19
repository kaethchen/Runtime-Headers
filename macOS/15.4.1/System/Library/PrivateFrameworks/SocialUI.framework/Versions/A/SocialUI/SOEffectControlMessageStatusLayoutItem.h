@class NSString, SOEffectControlMessageStatusCollectionViewItem, IMTranscriptChatItem;

@interface SOEffectControlMessageStatusLayoutItem : NSObject <IMChatTranscriptDrawable> {
    SOEffectControlMessageStatusCollectionViewItem *_referenceViewController;
}

@property (class, readonly, nonatomic) Class viewClass;
@property (class, readonly, copy, nonatomic) NSString *itemTypeIdentifier;

@property (retain, nonatomic) IMTranscriptChatItem *chatTranscriptItem;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) long long layoutClassification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
