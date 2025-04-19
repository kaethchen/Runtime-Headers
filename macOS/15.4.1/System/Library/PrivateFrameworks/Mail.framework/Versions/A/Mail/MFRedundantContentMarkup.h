@class MCMessageBody, NSString, MCMessage;

@interface MFRedundantContentMarkup : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) MCMessage *message;
@property (readonly, nonatomic) MCMessageBody *messageBody;
@property (readonly, nonatomic) MCMessage *ancestorUsedForComparison;
@property (readonly, copy, nonatomic) NSString *messageBodyWithRedundantTextMarkers;
@property (readonly, copy, nonatomic) NSString *redundantContentSenderName;
@property (readonly, nonatomic) BOOL matchedEntireAncestorContiguously;
@property (readonly, nonatomic) BOOL messageContainsRedundantText;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
