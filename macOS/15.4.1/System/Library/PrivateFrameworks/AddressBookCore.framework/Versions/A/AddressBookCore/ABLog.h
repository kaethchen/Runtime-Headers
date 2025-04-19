@class NSString;

@interface ABLog : ABRecord {
    NSString *_deletedUID;
}

+ (id)builtInProperties;

- (void)dealloc;
- (id)_deletedUID;
- (id)nts_DeletedUID;
- (id)nts_InitWithDeletedUID:(id)a0 addressBook:(id)a1;

@end
