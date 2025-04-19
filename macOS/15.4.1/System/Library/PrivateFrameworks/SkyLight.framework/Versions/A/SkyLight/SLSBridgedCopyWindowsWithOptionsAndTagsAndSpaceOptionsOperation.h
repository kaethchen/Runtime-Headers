@class NSData;

@interface SLSBridgedCopyWindowsWithOptionsAndTagsAndSpaceOptionsOperation : SLSSynchronousBridgedWindowManagementOperation {
    NSData *_setTagsData;
    NSData *_clearedTagsData;
}

@property (readonly) unsigned int owner;
@property (readonly) unsigned int spaceOptions;
@property (readonly) unsigned int options;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getClearedTags:(unsigned int[2])a0;
- (void)getSetTags:(unsigned int[2])a0;
- (id)initWithOwner:(unsigned int)a0 spaceOptions:(unsigned int)a1 options:(unsigned int)a2 setTags:(unsigned int[2])a3 clearedTags:(unsigned int[2])a4;
- (id)invokeFallback;
- (id)makeResultWithNumbers:(id)a0;

@end
