#pragma once


namespace PhysX
{
	public enum class ClothFabricPhaseType
	{
		Invalid = PxClothFabricPhaseType::eINVALID,  //!< invalid type 
		Vertical = PxClothFabricPhaseType::eVERTICAL,  //!< resists stretching or compression, usually along the gravity
		Horizontal = PxClothFabricPhaseType::eHORIZONTAL,  //!< resists stretching or compression, perpendicular to the gravity
		Bending = PxClothFabricPhaseType::eBENDING,  //!< resists out-of-plane bending in angle-based formulation
		Shearing = PxClothFabricPhaseType::eSHEARING  //!< resists in-plane shearing along (typically) diagonal edges,
	};

	[Flags]
	public enum class ClothFlag
	{
		/// <summary>
		/// Default value
		/// </summary>
		Default = PxClothFlag::eDEFAULT,

		/// <summary>
		/// Use CUDA to simulate cloth.
		/// </summary>
		CUDA = PxClothFlag::eCUDA,

		/// <summary>
		/// Turn on/off gpu based solver.
		/// </summary>
		[Obsolete]
		GPU = PxClothFlag::eGPU,

		/// <summary>
		/// Use swept contact (continuous collision).
		/// </summary>
		SweptContact = PxClothFlag::eSWEPT_CONTACT,

		/// <summary>
		/// Collide against rigid body shapes in scene.
		/// </summary>
		SceneCollision = PxClothFlag::eSCENE_COLLISION
	};
};