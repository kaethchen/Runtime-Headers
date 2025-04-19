@class NSNumber, NSDictionary, MTRDeviceController;

@interface MTRServerAttribute : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    MTRDeviceController *_deviceController;
    NSDictionary *_value;
    struct ConcreteClusterPath { unsigned short mEndpointId; BOOL mExpanded; unsigned int mClusterId; } _parentCluster;
}

@property (readonly, nonatomic) id serializedValue;
@property (readonly, nonatomic) const struct ConcreteClusterPath { unsigned short x0; BOOL x1; unsigned int x2; } *parentCluster;
@property (readonly, copy) NSNumber *attributeID;
@property (readonly, copy) NSDictionary *value;
@property (readonly) unsigned char requiredReadPrivilege;
@property (readonly, getter=isWritable) BOOL writable;

+ (id)newFeatureMapAttributeWithInitialValue:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (BOOL)setValue:(id)a0;
- (BOOL)addToCluster:(const struct ConcreteClusterPath { unsigned short x0; BOOL x1; unsigned int x2; } *)a0;
- (BOOL)associateWithController:(id)a0;
- (id)initReadonlyAttributeWithID:(id)a0 initialValue:(id)a1 requiredPrivilege:(unsigned char)a2;
- (void)updateParentCluster:(const struct ConcreteClusterPath { unsigned short x0; BOOL x1; unsigned int x2; } *)a0;

@end
