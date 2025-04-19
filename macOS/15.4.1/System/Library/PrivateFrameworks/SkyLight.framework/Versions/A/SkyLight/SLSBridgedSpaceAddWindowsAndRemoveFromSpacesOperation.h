@class NSArray;

@interface SLSBridgedSpaceAddWindowsAndRemoveFromSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSArray *windows;
@property (readonly) unsigned int options;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 windows:(id)a1 options:(unsigned int)a2;
- (void)invokeFallback;

@end
