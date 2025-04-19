@class NSArray;

@interface SLSBridgedMoveWindowsToManagedSpaceOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *windows;
@property (readonly) unsigned long long spaceID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindows:(id)a0 spaceID:(unsigned long long)a1;
- (void)invokeFallback;

@end
