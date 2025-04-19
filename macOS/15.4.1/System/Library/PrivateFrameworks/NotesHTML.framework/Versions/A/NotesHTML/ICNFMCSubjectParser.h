@interface ICNFMCSubjectParser : NSObject

+ (BOOL)subjectHasReplyPrefix:(id)a0;
+ (unsigned long long)effectivePrefixLengthForSubject:(id)a0 replyOnly:(BOOL)a1;

@end
