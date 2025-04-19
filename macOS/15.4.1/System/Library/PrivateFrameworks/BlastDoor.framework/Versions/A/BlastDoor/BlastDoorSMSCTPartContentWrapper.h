@class NSString, BlastDoorSMSCTPartPlain, BlastDoorSMSCTPartAttachment, BlastDoorSMSCTPartSMIL, BlastDoorSMSCTPartAttributedChipList, BlastDoorSMSCTPartAttributedRichCards;

@interface BlastDoorSMSCTPartContentWrapper : NSObject {
    void /* unknown type, empty encoding */ sMSCTPart_Content;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorSMSCTPartPlain *plain;
@property (nonatomic, readonly) BlastDoorSMSCTPartSMIL *smil;
@property (nonatomic, readonly) BlastDoorSMSCTPartAttachment *attachment;
@property (nonatomic, readonly) BlastDoorSMSCTPartAttributedChipList *attributedChipList;
@property (nonatomic, readonly) BlastDoorSMSCTPartAttributedRichCards *attributedRichCards;

- (id)init;
- (void).cxx_destruct;

@end
