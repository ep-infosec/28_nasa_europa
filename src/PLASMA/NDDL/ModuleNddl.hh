
#ifndef H_ModuleNddl
#define H_ModuleNddl

#include "Module.hh"

namespace EUROPA {
  class ModuleNddl : public Module
  {
    public:
      ModuleNddl();
      virtual ~ModuleNddl();

      /**
       * @brief Initialize all default elements of the module 
       */
	  virtual void initialize();
	  /**
	   * @brief Uninitialize all default elements of the module 
	   */
	  virtual void uninitialize();   

	  virtual void initialize(EngineId engine);   // initialization of a particular engine instance

	  virtual void uninitialize(EngineId engine); // cleanup of a particular engine instance	  
  };

  typedef Id<ModuleNddl> ModuleNddlId;  
}  


#endif /* #ifndef H_ModuleNddl */
