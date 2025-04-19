@class NSArray, NSString;
@protocol SCRMailMessageContent;

@interface SCRMailGroup : SCRGroup <SCRMailMessageContentHost>

@property (readonly, nonatomic) id<SCRMailMessageContent> messageContent;
@property (readonly, nonatomic) NSArray *potentialMessageContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMessageContentGroup;
- (BOOL)shouldPromoteUIElement:(id)a0;

@end
