<?php
/**
 * @file
 * mediwe_textfragments.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mediwe_textfragments_taxonomy_default_vocabularies() {
  return array(
    'application' => array(
      'name' => 'Toepassing',
      'machine_name' => 'application',
      'description' => 'Toepassing van een vertaalde tekst',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
