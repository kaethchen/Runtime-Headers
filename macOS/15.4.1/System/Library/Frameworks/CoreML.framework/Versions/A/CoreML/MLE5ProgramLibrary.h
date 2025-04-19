@class NSString, NSArray, MLModelConfiguration, MLProgramE5Container, NSObject;
@protocol OS_dispatch_queue, MLE5ProgramLibraryImpl;

@interface MLE5ProgramLibrary : NSObject {
    struct e5rt_program_library { } *_programLibraryHandle;
}

@property (readonly, nonatomic) id<MLE5ProgramLibraryImpl> impl;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lazyInitQueue;
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration;
@property (readonly, nonatomic) MLProgramE5Container *container;
@property (readonly, copy, nonatomic) NSString *modelDisplayName;
@property (readonly, copy, nonatomic) NSArray *functionNames;
@property (readonly) NSString *serializedMILText;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_allocateStateBufferForFeatureNamed:(id)a0 entryFunctionName:(id)a1 programFunctionNames:(id)a2 error:(id *)a3;
- (struct e5rt_program_library { } *)_programLibraryHandleWithForceRespecialization:(BOOL)a0 error:(id *)a1;
- (struct e5rt_execution_stream_operation { } *)createOperationForFunctionName:(id)a0 forceRespecialization:(BOOL)a1 hasRangeShapeInputs:(BOOL)a2 error:(id *)a3;
- (id)initWithContainer:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithImpl:(id)a0 container:(id)a1 configuration:(id)a2;
- (id)newStateForFunctionNamed:(id)a0 stateNames:(id)a1 clientBuffers:(id)a2 error:(id *)a3;
- (BOOL)prepareAndReturnError:(id *)a0;
- (id)segmentationAnalyticsAndReturnError:(id *)a0;

@end
