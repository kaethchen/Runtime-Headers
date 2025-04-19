@interface IMAPContinuationResponse : IMAPBasicResponse

- (const char *)_responseName;
- (BOOL)isUntagged;

@end
