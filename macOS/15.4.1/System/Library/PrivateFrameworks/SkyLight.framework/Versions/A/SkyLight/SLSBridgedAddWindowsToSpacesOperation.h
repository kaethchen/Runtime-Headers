@class NSArray;

@interface SLSBridgedAddWindowsToSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *windows;
@property (readonly, copy) NSArray *spaces;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindows:(id)a0 spaces:(id)a1;
- (void)invokeFallback;

@end
