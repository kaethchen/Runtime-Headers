@class IMMessagePartChatItem, NSURL, DOMElement, DDScannerResult;

@interface TranscriptDOMDDItem : NSObject

@property (retain, nonatomic) DOMElement *domElement;
@property (retain, nonatomic) DDScannerResult *ddResult;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) IMMessagePartChatItem *chatItem;

- (void).cxx_destruct;

@end
